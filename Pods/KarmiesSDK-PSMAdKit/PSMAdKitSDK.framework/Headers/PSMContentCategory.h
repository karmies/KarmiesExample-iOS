//
//  PSMContentCategories.h
//  PSMAdKitSDK
//
//  Created by Demid Merzlyakov on 16.08.16.
//  Copyright © 2016 OneLouder Apps. All rights reserved.
//

#ifndef PSMCONTENTCATEGORIES_DEFINE
#define PSMCONTENTCATEGORIES_DEFINE


typedef NS_ENUM(NSUInteger, PSMContentCategory) {
    /**
     * Entertainment
     */
    PSMContentCategoryArtsEntertainment = 1 * 1000, //IAB1
    /**
     * Arts & Entertainment: Books & Literature
     */
    PSMContentCategoryArtsEntertainmentBooksLiterature = 1 * 1000 + 1, //IAB1-1
    /**
     * Arts & Entertainment: Celebrity Fan/Gossip
     */
    PSMContentCategoryArtsEntertainmentCelebrityFanGossip = 1 * 1000 + 2, //IAB1-2
    /**
     * Arts & Entertainment: Fine Art
     */
    PSMContentCategoryArtsEntertainmentFineArt = 1 * 1000 + 3, //IAB1-3
    /**
     * Arts & Entertainment: Humor
     */
    PSMContentCategoryArtsEntertainmentHumor = 1 * 1000 + 4, //IAB1-4
    /**
     * Arts & Entertainment: Movies
     */
    PSMContentCategoryArtsEntertainmentMovies = 1 * 1000 + 5, //IAB1-5
    /**
     * Arts & Entertainment: Music
     */
    PSMContentCategoryArtsEntertainmentMusic = 1 * 1000 + 6, //IAB1-6
    /**
     * Arts & Entertainment: Television
     */
    PSMContentCategoryArtsEntertainmentTelevision = 1 * 1000 + 7, //IAB1-7
    /**
     * Automotive
     */
    PSMContentCategoryAutomotive = 2 * 1000, //IAB2
    /**
     * Automotive: Auto Parts
     */
    PSMContentCategoryAutomotiveAutoParts = 2 * 1000 + 1, //IAB2-1
    /**
     * Automotive: Auto Repair
     */
    PSMContentCategoryAutomotiveAutoRepair = 2 * 1000 + 2, //IAB2-2
    /**
     * Automotive: Buying/Selling Cars
     */
    PSMContentCategoryAutomotiveBuyingSellingCars = 2 * 1000 + 3, //IAB2-3
    /**
     * Automotive: Car Culture
     */
    PSMContentCategoryAutomotiveCarCulture = 2 * 1000 + 4, //IAB2-4
    /**
     * Automotive: Certified Pre-Owned
     */
    PSMContentCategoryAutomotiveCertifiedPreOwned = 2 * 1000 + 5, //IAB2-5
    /**
     * Automotive: Convertible
     */
    PSMContentCategoryAutomotiveConvertible = 2 * 1000 + 6, //IAB2-6
    /**
     * Automotive: Coupe
     */
    PSMContentCategoryAutomotiveCoupe = 2 * 1000 + 7, //IAB2-7
    /**
     * Automotive: Crossover
     */
    PSMContentCategoryAutomotiveCrossover = 2 * 1000 + 8, //IAB2-8
    /**
     * Automotive: Diesel
     */
    PSMContentCategoryAutomotiveDiesel = 2 * 1000 + 9, //IAB2-9
    /**
     * Automotive: Electric Vehicle
     */
    PSMContentCategoryAutomotiveElectricVehicle = 2 * 1000 + 10, //IAB2-10
    /**
     * Automotive: Hatchback
     */
    PSMContentCategoryAutomotiveHatchback = 2 * 1000 + 11, //IAB2-11
    /**
     * Automotive: Hybrid
     */
    PSMContentCategoryAutomotiveHybrid = 2 * 1000 + 12, //IAB2-12
    /**
     * Automotive: Luxury
     */
    PSMContentCategoryAutomotiveLuxury = 2 * 1000 + 13, //IAB2-13
    /**
     * Automotive: Minivan
     */
    PSMContentCategoryAutomotiveMinivan = 2 * 1000 + 14, //IAB2-14
    /**
     * Automotive: Motorcycles
     */
    PSMContentCategoryAutomotiveMotorcycles = 2 * 1000 + 15, //IAB2-15
    /**
     * Automotive: Off-Road Vehicles
     */
    PSMContentCategoryAutomotiveOffRoadVehicles = 2 * 1000 + 16, //IAB2-16
    /**
     * Automotive: Performance Vehicles
     */
    PSMContentCategoryAutomotivePerformanceVehicles = 2 * 1000 + 17, //IAB2-17
    /**
     * Automotive: Pickup
     */
    PSMContentCategoryAutomotivePickup = 2 * 1000 + 18, //IAB2-18
    /**
     * Automotive: Road-Side Assistance
     */
    PSMContentCategoryAutomotiveRoadSideAssistance = 2 * 1000 + 19, //IAB2-19
    /**
     * Automotive: Sedan
     */
    PSMContentCategoryAutomotiveSedan = 2 * 1000 + 20, //IAB2-20
    /**
     * Automotive: Trucks & Accessories
     */
    PSMContentCategoryAutomotiveTrucksAccessories = 2 * 1000 + 21, //IAB2-21
    /**
     * Automotive: Vintage Cars
     */
    PSMContentCategoryAutomotiveVintageCars = 2 * 1000 + 22, //IAB2-22
    /**
     * Automotive: Wagon
     */
    PSMContentCategoryAutomotiveWagon = 2 * 1000 + 23, //IAB2-23
    /**
     * Business
     */
    PSMContentCategoryBusiness = 3 * 1000, //IAB3
    /**
     * Business: Advertising
     */
    PSMContentCategoryBusinessAdvertising = 3 * 1000 + 1, //IAB3-1
    /**
     * Business: Agriculture
     */
    PSMContentCategoryBusinessAgriculture = 3 * 1000 + 2, //IAB3-2
    /**
     * Business: Biotech/Biomedical
     */
    PSMContentCategoryBusinessBiotechBiomedical = 3 * 1000 + 3, //IAB3-3
    /**
     * Business: Business Software
     */
    PSMContentCategoryBusinessBusinessSoftware = 3 * 1000 + 4, //IAB3-4
    /**
     * Business: Construction
     */
    PSMContentCategoryBusinessConstruction = 3 * 1000 + 5, //IAB3-5
    /**
     * Business: Forestry
     */
    PSMContentCategoryBusinessForestry = 3 * 1000 + 6, //IAB3-6
    /**
     * Business: Government
     */
    PSMContentCategoryBusinessGovernment = 3 * 1000 + 7, //IAB3-7
    /**
     * Business: Green Solutions
     */
    PSMContentCategoryBusinessGreenSolutions = 3 * 1000 + 8, //IAB3-8
    /**
     * Business: Human Resources
     */
    PSMContentCategoryBusinessHumanResources = 3 * 1000 + 9, //IAB3-9
    /**
     * Business: Logistics
     */
    PSMContentCategoryBusinessLogistics = 3 * 1000 + 10, //IAB3-10
    /**
     * Business: Marketing
     */
    PSMContentCategoryBusinessMarketing = 3 * 1000 + 11, //IAB3-11
    /**
     * Business: Metals
     */
    PSMContentCategoryBusinessMetals = 3 * 1000 + 12, //IAB3-12
    /**
     * Careers
     */
    PSMContentCategoryCareers = 4 * 1000, //IAB4
    /**
     * Careers: Career Planning
     */
    PSMContentCategoryCareersCareerPlanning = 4 * 1000 + 1, //IAB4-1
    /**
     * Careers: College
     */
    PSMContentCategoryCareersCollege = 4 * 1000 + 2, //IAB4-2
    /**
     * Careers: Financial Aid
     */
    PSMContentCategoryCareersFinancialAid = 4 * 1000 + 3, //IAB4-3
    /**
     * Careers: Job Fairs
     */
    PSMContentCategoryCareersJobFairs = 4 * 1000 + 4, //IAB4-4
    /**
     * Careers: Job Search
     */
    PSMContentCategoryCareersJobSearch = 4 * 1000 + 5, //IAB4-5
    /**
     * Careers: Resume Writing/Advice
     */
    PSMContentCategoryCareersResumeWritingAdvice = 4 * 1000 + 6, //IAB4-6
    /**
     * Careers: Nursing
     */
    PSMContentCategoryCareersNursing = 4 * 1000 + 7, //IAB4-7
    /**
     * Careers: Scholarships
     */
    PSMContentCategoryCareersScholarships = 4 * 1000 + 8, //IAB4-8
    /**
     * Careers: Telecommuting
     */
    PSMContentCategoryCareersTelecommuting = 4 * 1000 + 9, //IAB4-9
    /**
     * Careers: U.S. Military
     */
    PSMContentCategoryCareersUSMilitary = 4 * 1000 + 10, //IAB4-10
    /**
     * Careers: Career Advice
     */
    PSMContentCategoryCareersCareerAdvice = 4 * 1000 + 11, //IAB4-11
    /**
     * Education
     */
    PSMContentCategoryEducation = 5 * 1000, //IAB5
    /**
     * Education: 7-12 Education
     */
    PSMContentCategoryEducation712Education = 5 * 1000 + 1, //IAB5-1
    /**
     * Education: Adult Education
     */
    PSMContentCategoryEducationAdultEducation = 5 * 1000 + 2, //IAB5-2
    /**
     * Education: Art History
     */
    PSMContentCategoryEducationArtHistory = 5 * 1000 + 3, //IAB5-3
    /**
     * Education: College Administration
     */
    PSMContentCategoryEducationCollegeAdministration = 5 * 1000 + 4, //IAB5-4
    /**
     * Education: College Life
     */
    PSMContentCategoryEducationCollegeLife = 5 * 1000 + 5, //IAB5-5
    /**
     * Education: Distance Learning
     */
    PSMContentCategoryEducationDistanceLearning = 5 * 1000 + 6, //IAB5-6
    /**
     * Education: English as a 2nd Language
     */
    PSMContentCategoryEducationEnglishasa2ndLanguage = 5 * 1000 + 7, //IAB5-7
    /**
     * Education: Language Learning
     */
    PSMContentCategoryEducationLanguageLearning = 5 * 1000 + 8, //IAB5-8
    /**
     * Education: Graduate School
     */
    PSMContentCategoryEducationGraduateSchool = 5 * 1000 + 9, //IAB5-9
    /**
     * Education: Homeschooling
     */
    PSMContentCategoryEducationHomeschooling = 5 * 1000 + 10, //IAB5-10
    /**
     * Education: Homework/Study Tips
     */
    PSMContentCategoryEducationHomeworkStudyTips = 5 * 1000 + 11, //IAB5-11
    /**
     * Education: K-6 Educators
     */
    PSMContentCategoryEducationK6Educators = 5 * 1000 + 12, //IAB5-12
    /**
     * Education: Private School
     */
    PSMContentCategoryEducationPrivateSchool = 5 * 1000 + 13, //IAB5-13
    /**
     * Education: Special Education
     */
    PSMContentCategoryEducationSpecialEducation = 5 * 1000 + 14, //IAB5-14
    /**
     * Education: Studying Business
     */
    PSMContentCategoryEducationStudyingBusiness = 5 * 1000 + 15, //IAB5-15
    /**
     * Parenting
     */
    PSMContentCategoryFamilyParenting = 6 * 1000, //IAB6
    /**
     * Family & Parenting: Adoption
     */
    PSMContentCategoryFamilyParentingAdoption = 6 * 1000 + 1, //IAB6-1
    /**
     * Family & Parenting: Babies & Toddlers
     */
    PSMContentCategoryFamilyParentingBabiesToddlers = 6 * 1000 + 2, //IAB6-2
    /**
     * Family & Parenting: Daycare/Pre School
     */
    PSMContentCategoryFamilyParentingDaycarePreSchool = 6 * 1000 + 3, //IAB6-3
    /**
     * Family & Parenting: Family Internet
     */
    PSMContentCategoryFamilyParentingFamilyInternet = 6 * 1000 + 4, //IAB6-4
    /**
     * Family & Parenting: Parenting - K-6 Kids
     */
    PSMContentCategoryFamilyParentingParentingK6Kids = 6 * 1000 + 5, //IAB6-5
    /**
     * Family & Parenting: Parenting teens
     */
    PSMContentCategoryFamilyParentingParentingteens = 6 * 1000 + 6, //IAB6-6
    /**
     * Family & Parenting: Pregnancy
     */
    PSMContentCategoryFamilyParentingPregnancy = 6 * 1000 + 7, //IAB6-7
    /**
     * Family & Parenting: Special Needs Kids
     */
    PSMContentCategoryFamilyParentingSpecialNeedsKids = 6 * 1000 + 8, //IAB6-8
    /**
     * Family & Parenting: Eldercare
     */
    PSMContentCategoryFamilyParentingEldercare = 6 * 1000 + 9, //IAB6-9
    /**
     * Fitness
     */
    PSMContentCategoryHealthFitness = 7 * 1000, //IAB7
    /**
     * Health & Fitness: Exercise
     */
    PSMContentCategoryHealthFitnessExercise = 7 * 1000 + 1, //IAB7-1
    /**
     * Health & Fitness: ADD
     */
    PSMContentCategoryHealthFitnessADD = 7 * 1000 + 2, //IAB7-2
    /**
     * Health & Fitness: AIDS/HIV
     */
    PSMContentCategoryHealthFitnessAIDSHIV = 7 * 1000 + 3, //IAB7-3
    /**
     * Health & Fitness: Allergies
     */
    PSMContentCategoryHealthFitnessAllergies = 7 * 1000 + 4, //IAB7-4
    /**
     * Health & Fitness: Alternative Medicine
     */
    PSMContentCategoryHealthFitnessAlternativeMedicine = 7 * 1000 + 5, //IAB7-5
    /**
     * Health & Fitness: Arthritis
     */
    PSMContentCategoryHealthFitnessArthritis = 7 * 1000 + 6, //IAB7-6
    /**
     * Health & Fitness: Asthma
     */
    PSMContentCategoryHealthFitnessAsthma = 7 * 1000 + 7, //IAB7-7
    /**
     * Health & Fitness: Autism/PDD
     */
    PSMContentCategoryHealthFitnessAutismPDD = 7 * 1000 + 8, //IAB7-8
    /**
     * Health & Fitness: Bipolar Disorder
     */
    PSMContentCategoryHealthFitnessBipolarDisorder = 7 * 1000 + 9, //IAB7-9
    /**
     * Health & Fitness: Brain Tumor
     */
    PSMContentCategoryHealthFitnessBrainTumor = 7 * 1000 + 10, //IAB7-10
    /**
     * Health & Fitness: Cancer
     */
    PSMContentCategoryHealthFitnessCancer = 7 * 1000 + 11, //IAB7-11
    /**
     * Health & Fitness: Cholesterol
     */
    PSMContentCategoryHealthFitnessCholesterol = 7 * 1000 + 12, //IAB7-12
    /**
     * Health & Fitness: Chronic Fatigue Syndrome
     */
    PSMContentCategoryHealthFitnessChronicFatigueSyndrome = 7 * 1000 + 13, //IAB7-13
    /**
     * Health & Fitness: Chronic Pain
     */
    PSMContentCategoryHealthFitnessChronicPain = 7 * 1000 + 14, //IAB7-14
    /**
     * Health & Fitness: Cold & Flu
     */
    PSMContentCategoryHealthFitnessColdFlu = 7 * 1000 + 15, //IAB7-15
    /**
     * Health & Fitness: Deafness
     */
    PSMContentCategoryHealthFitnessDeafness = 7 * 1000 + 16, //IAB7-16
    /**
     * Health & Fitness: Dental Care
     */
    PSMContentCategoryHealthFitnessDentalCare = 7 * 1000 + 17, //IAB7-17
    /**
     * Health & Fitness: Depression
     */
    PSMContentCategoryHealthFitnessDepression = 7 * 1000 + 18, //IAB7-18
    /**
     * Health & Fitness: Dermatology
     */
    PSMContentCategoryHealthFitnessDermatology = 7 * 1000 + 19, //IAB7-19
    /**
     * Health & Fitness: Diabetes
     */
    PSMContentCategoryHealthFitnessDiabetes = 7 * 1000 + 20, //IAB7-20
    /**
     * Health & Fitness: Epilepsy
     */
    PSMContentCategoryHealthFitnessEpilepsy = 7 * 1000 + 21, //IAB7-21
    /**
     * Health & Fitness: GERD/Acid Reflux
     */
    PSMContentCategoryHealthFitnessGERDAcidReflux = 7 * 1000 + 22, //IAB7-22
    /**
     * Health & Fitness: Headaches/Migraines
     */
    PSMContentCategoryHealthFitnessHeadachesMigraines = 7 * 1000 + 23, //IAB7-23
    /**
     * Health & Fitness: Heart Disease
     */
    PSMContentCategoryHealthFitnessHeartDisease = 7 * 1000 + 24, //IAB7-24
    /**
     * Health & Fitness: Herbs for Health
     */
    PSMContentCategoryHealthFitnessHerbsforHealth = 7 * 1000 + 25, //IAB7-25
    /**
     * Health & Fitness: Holistic Healing
     */
    PSMContentCategoryHealthFitnessHolisticHealing = 7 * 1000 + 26, //IAB7-26
    /**
     * Health & Fitness: IBS/Crohn’s Disease
     */
    PSMContentCategoryHealthFitnessIBSCrohnsDisease = 7 * 1000 + 27, //IAB7-27
    /**
     * Health & Fitness: Incest/Abuse Support
     */
    PSMContentCategoryHealthFitnessIncestAbuseSupport = 7 * 1000 + 28, //IAB7-28
    /**
     * Health & Fitness: Incontinence
     */
    PSMContentCategoryHealthFitnessIncontinence = 7 * 1000 + 29, //IAB7-29
    /**
     * Health & Fitness: Infertility
     */
    PSMContentCategoryHealthFitnessInfertility = 7 * 1000 + 30, //IAB7-30
    /**
     * Health & Fitness: Men’s Health
     */
    PSMContentCategoryHealthFitnessMensHealth = 7 * 1000 + 31, //IAB7-31
    /**
     * Health & Fitness: Nutrition
     */
    PSMContentCategoryHealthFitnessNutrition = 7 * 1000 + 32, //IAB7-32
    /**
     * Health & Fitness: Orthopedics
     */
    PSMContentCategoryHealthFitnessOrthopedics = 7 * 1000 + 33, //IAB7-33
    /**
     * Health & Fitness: Panic/Anxiety Disorders
     */
    PSMContentCategoryHealthFitnessPanicAnxietyDisorders = 7 * 1000 + 34, //IAB7-34
    /**
     * Health & Fitness: Pediatrics
     */
    PSMContentCategoryHealthFitnessPediatrics = 7 * 1000 + 35, //IAB7-35
    /**
     * Health & Fitness: Physical Therapy
     */
    PSMContentCategoryHealthFitnessPhysicalTherapy = 7 * 1000 + 36, //IAB7-36
    /**
     * Health & Fitness: Psychology/Psychiatry
     */
    PSMContentCategoryHealthFitnessPsychologyPsychiatry = 7 * 1000 + 37, //IAB7-37
    /**
     * Health & Fitness: Senior Health
     */
    PSMContentCategoryHealthFitnessSeniorHealth = 7 * 1000 + 38, //IAB7-38
    /**
     * Health & Fitness: Sexuality
     */
    PSMContentCategoryHealthFitnessSexuality = 7 * 1000 + 39, //IAB7-39
    /**
     * Health & Fitness: Sleep Disorders
     */
    PSMContentCategoryHealthFitnessSleepDisorders = 7 * 1000 + 40, //IAB7-40
    /**
     * Health & Fitness: Smoking Cessation
     */
    PSMContentCategoryHealthFitnessSmokingCessation = 7 * 1000 + 41, //IAB7-41
    /**
     * Health & Fitness: Substance Abuse
     */
    PSMContentCategoryHealthFitnessSubstanceAbuse = 7 * 1000 + 42, //IAB7-42
    /**
     * Health & Fitness: Thyroid Disease
     */
    PSMContentCategoryHealthFitnessThyroidDisease = 7 * 1000 + 43, //IAB7-43
    /**
     * Health & Fitness: Weight Loss
     */
    PSMContentCategoryHealthFitnessWeightLoss = 7 * 1000 + 44, //IAB7-44
    /**
     * Health & Fitness: Women's Health
     */
    PSMContentCategoryHealthFitnessWomensHealth = 7 * 1000 + 45, //IAB7-45
    /**
     * Drink
     */
    PSMContentCategoryFoodDrink = 8 * 1000, //IAB8
    /**
     * Food & Drink: American Cuisine
     */
    PSMContentCategoryFoodDrinkAmericanCuisine = 8 * 1000 + 1, //IAB8-1
    /**
     * Food & Drink: Barbecues & Grilling
     */
    PSMContentCategoryFoodDrinkBarbecuesGrilling = 8 * 1000 + 2, //IAB8-2
    /**
     * Food & Drink: Cajun/Creole
     */
    PSMContentCategoryFoodDrinkCajunCreole = 8 * 1000 + 3, //IAB8-3
    /**
     * Food & Drink: Chinese Cuisine
     */
    PSMContentCategoryFoodDrinkChineseCuisine = 8 * 1000 + 4, //IAB8-4
    /**
     * Food & Drink: Cocktails/Beer
     */
    PSMContentCategoryFoodDrinkCocktailsBeer = 8 * 1000 + 5, //IAB8-5
    /**
     * Food & Drink: Coffee/Tea
     */
    PSMContentCategoryFoodDrinkCoffeeTea = 8 * 1000 + 6, //IAB8-6
    /**
     * Food & Drink: Cuisine-Specific
     */
    PSMContentCategoryFoodDrinkCuisineSpecific = 8 * 1000 + 7, //IAB8-7
    /**
     * Food & Drink: Desserts & Baking
     */
    PSMContentCategoryFoodDrinkDessertsBaking = 8 * 1000 + 8, //IAB8-8
    /**
     * Food & Drink: Dining Out
     */
    PSMContentCategoryFoodDrinkDiningOut = 8 * 1000 + 9, //IAB8-9
    /**
     * Food & Drink: Food Allergies
     */
    PSMContentCategoryFoodDrinkFoodAllergies = 8 * 1000 + 10, //IAB8-10
    /**
     * Food & Drink: French Cuisine
     */
    PSMContentCategoryFoodDrinkFrenchCuisine = 8 * 1000 + 11, //IAB8-11
    /**
     * Food & Drink: Health/Low-Fat Cooking
     */
    PSMContentCategoryFoodDrinkHealthLowFatCooking = 8 * 1000 + 12, //IAB8-12
    /**
     * Food & Drink: Italian Cuisine
     */
    PSMContentCategoryFoodDrinkItalianCuisine = 8 * 1000 + 13, //IAB8-13
    /**
     * Food & Drink: Japanese Cuisine
     */
    PSMContentCategoryFoodDrinkJapaneseCuisine = 8 * 1000 + 14, //IAB8-14
    /**
     * Food & Drink: Mexican Cuisine
     */
    PSMContentCategoryFoodDrinkMexicanCuisine = 8 * 1000 + 15, //IAB8-15
    /**
     * Food & Drink: Vegan
     */
    PSMContentCategoryFoodDrinkVegan = 8 * 1000 + 16, //IAB8-16
    /**
     * Food & Drink: Vegetarian
     */
    PSMContentCategoryFoodDrinkVegetarian = 8 * 1000 + 17, //IAB8-17
    /**
     * Food & Drink: Wine
     */
    PSMContentCategoryFoodDrinkWine = 8 * 1000 + 18, //IAB8-18
    /**
     * Interests
     */
    PSMContentCategoryHobbiesInterests = 9 * 1000, //IAB9
    /**
     * Hobbies & Interests: Art/Technology
     */
    PSMContentCategoryHobbiesInterestsArtTechnology = 9 * 1000 + 1, //IAB9-1
    /**
     * Hobbies & Interests: Arts & Crafts
     */
    PSMContentCategoryHobbiesInterestsArtsCrafts = 9 * 1000 + 2, //IAB9-2
    /**
     * Hobbies & Interests: Beadwork
     */
    PSMContentCategoryHobbiesInterestsBeadwork = 9 * 1000 + 3, //IAB9-3
    /**
     * Hobbies & Interests: Bird-Watching
     */
    PSMContentCategoryHobbiesInterestsBirdWatching = 9 * 1000 + 4, //IAB9-4
    /**
     * Hobbies & Interests: Board Games/Puzzles
     */
    PSMContentCategoryHobbiesInterestsBoardGamesPuzzles = 9 * 1000 + 5, //IAB9-5
    /**
     * Hobbies & Interests: Candle & Soap Making
     */
    PSMContentCategoryHobbiesInterestsCandleSoapMaking = 9 * 1000 + 6, //IAB9-6
    /**
     * Hobbies & Interests: Card Games
     */
    PSMContentCategoryHobbiesInterestsCardGames = 9 * 1000 + 7, //IAB9-7
    /**
     * Hobbies & Interests: Chess
     */
    PSMContentCategoryHobbiesInterestsChess = 9 * 1000 + 8, //IAB9-8
    /**
     * Hobbies & Interests: Cigars
     */
    PSMContentCategoryHobbiesInterestsCigars = 9 * 1000 + 9, //IAB9-9
    /**
     * Hobbies & Interests: Collecting
     */
    PSMContentCategoryHobbiesInterestsCollecting = 9 * 1000 + 10, //IAB9-10
    /**
     * Hobbies & Interests: Comic Books
     */
    PSMContentCategoryHobbiesInterestsComicBooks = 9 * 1000 + 11, //IAB9-11
    /**
     * Hobbies & Interests: Drawing/Sketching
     */
    PSMContentCategoryHobbiesInterestsDrawingSketching = 9 * 1000 + 12, //IAB9-12
    /**
     * Hobbies & Interests: Freelance Writing
     */
    PSMContentCategoryHobbiesInterestsFreelanceWriting = 9 * 1000 + 13, //IAB9-13
    /**
     * Hobbies & Interests: Genealogy
     */
    PSMContentCategoryHobbiesInterestsGenealogy = 9 * 1000 + 14, //IAB9-14
    /**
     * Hobbies & Interests: Getting Published
     */
    PSMContentCategoryHobbiesInterestsGettingPublished = 9 * 1000 + 15, //IAB9-15
    /**
     * Hobbies & Interests: Guitar
     */
    PSMContentCategoryHobbiesInterestsGuitar = 9 * 1000 + 16, //IAB9-16
    /**
     * Hobbies & Interests: Home Recording
     */
    PSMContentCategoryHobbiesInterestsHomeRecording = 9 * 1000 + 17, //IAB9-17
    /**
     * Hobbies & Interests: Investors & Patents
     */
    PSMContentCategoryHobbiesInterestsInvestorsPatents = 9 * 1000 + 18, //IAB9-18
    /**
     * Hobbies & Interests: Jewelry Making
     */
    PSMContentCategoryHobbiesInterestsJewelryMaking = 9 * 1000 + 19, //IAB9-19
    /**
     * Hobbies & Interests: Magic & Illusion
     */
    PSMContentCategoryHobbiesInterestsMagicIllusion = 9 * 1000 + 20, //IAB9-20
    /**
     * Hobbies & Interests: Needlework
     */
    PSMContentCategoryHobbiesInterestsNeedlework = 9 * 1000 + 21, //IAB9-21
    /**
     * Hobbies & Interests: Painting
     */
    PSMContentCategoryHobbiesInterestsPainting = 9 * 1000 + 22, //IAB9-22
    /**
     * Hobbies & Interests: Photography
     */
    PSMContentCategoryHobbiesInterestsPhotography = 9 * 1000 + 23, //IAB9-23
    /**
     * Hobbies & Interests: Radio
     */
    PSMContentCategoryHobbiesInterestsRadio = 9 * 1000 + 24, //IAB9-24
    /**
     * Hobbies & Interests: Roleplaying Games
     */
    PSMContentCategoryHobbiesInterestsRoleplayingGames = 9 * 1000 + 25, //IAB9-25
    /**
     * Hobbies & Interests: Sci-Fi & Fantasy
     */
    PSMContentCategoryHobbiesInterestsSciFiFantasy = 9 * 1000 + 26, //IAB9-26
    /**
     * Hobbies & Interests: Scrapbooking
     */
    PSMContentCategoryHobbiesInterestsScrapbooking = 9 * 1000 + 27, //IAB9-27
    /**
     * Hobbies & Interests: Screenwriting
     */
    PSMContentCategoryHobbiesInterestsScreenwriting = 9 * 1000 + 28, //IAB9-28
    /**
     * Hobbies & Interests: Stamps & Coins
     */
    PSMContentCategoryHobbiesInterestsStampsCoins = 9 * 1000 + 29, //IAB9-29
    /**
     * Hobbies & Interests: Video & Computer Games
     */
    PSMContentCategoryHobbiesInterestsVideoComputerGames = 9 * 1000 + 30, //IAB9-30
    /**
     * Hobbies & Interests: Woodworking
     */
    PSMContentCategoryHobbiesInterestsWoodworking = 9 * 1000 + 31, //IAB9-31
    /**
     * Garden
     */
    PSMContentCategoryHomeGarden = 10 * 1000, //IAB10
    /**
     * Home & Garden: Appliances
     */
    PSMContentCategoryHomeGardenAppliances = 10 * 1000 + 1, //IAB10-1
    /**
     * Home & Garden: Entertaining
     */
    PSMContentCategoryHomeGardenEntertaining = 10 * 1000 + 2, //IAB10-2
    /**
     * Home & Garden: Environmental Safety
     */
    PSMContentCategoryHomeGardenEnvironmentalSafety = 10 * 1000 + 3, //IAB10-3
    /**
     * Home & Garden: Gardening
     */
    PSMContentCategoryHomeGardenGardening = 10 * 1000 + 4, //IAB10-4
    /**
     * Home & Garden: Home Repair
     */
    PSMContentCategoryHomeGardenHomeRepair = 10 * 1000 + 5, //IAB10-5
    /**
     * Home & Garden: Home Theater
     */
    PSMContentCategoryHomeGardenHomeTheater = 10 * 1000 + 6, //IAB10-6
    /**
     * Home & Garden: Interior Decorating
     */
    PSMContentCategoryHomeGardenInteriorDecorating = 10 * 1000 + 7, //IAB10-7
    /**
     * Home & Garden: Landscaping
     */
    PSMContentCategoryHomeGardenLandscaping = 10 * 1000 + 8, //IAB10-8
    /**
     * Home & Garden: Remodeling & Construction
     */
    PSMContentCategoryHomeGardenRemodelingConstruction = 10 * 1000 + 9, //IAB10-9
    /**
     * Politics
     */
    PSMContentCategoryLawGovernmentPolitics = 11 * 1000, //IAB11
    /**
     * Law, Government, & Politics: Immigration
     */
    PSMContentCategoryLawGovernmentPoliticsImmigration = 11 * 1000 + 1, //IAB11-1
    /**
     * Law, Government, & Politics: Legal Issues
     */
    PSMContentCategoryLawGovernmentPoliticsLegalIssues = 11 * 1000 + 2, //IAB11-2
    /**
     * Law, Government, & Politics: U.S. Government Resources
     */
    PSMContentCategoryLawGovernmentPoliticsUSGovernmentResources = 11 * 1000 + 3, //IAB11-3
    /**
     * Law, Government, & Politics: Politics
     */
    PSMContentCategoryLawGovernmentPoliticsPolitics = 11 * 1000 + 4, //IAB11-4
    /**
     * Law, Government, & Politics: Commentary
     */
    PSMContentCategoryLawGovernmentPoliticsCommentary = 11 * 1000 + 5, //IAB11-5
    /**
     * News
     */
    PSMContentCategoryNews = 12 * 1000, //IAB12
    /**
     * News: International News
     */
    PSMContentCategoryNewsInternationalNews = 12 * 1000 + 1, //IAB12-1
    /**
     * News: National News
     */
    PSMContentCategoryNewsNationalNews = 12 * 1000 + 2, //IAB12-2
    /**
     * News: Local News
     */
    PSMContentCategoryNewsLocalNews = 12 * 1000 + 3, //IAB12-3
    /**
     * Finance
     */
    PSMContentCategoryPersonalFinance = 13 * 1000, //IAB13
    /**
     * Personal Finance: Beginning Investing
     */
    PSMContentCategoryPersonalFinanceBeginningInvesting = 13 * 1000 + 1, //IAB13-1
    /**
     * Personal Finance: Credit/Debt & Loans
     */
    PSMContentCategoryPersonalFinanceCreditDebtLoans = 13 * 1000 + 2, //IAB13-2
    /**
     * Personal Finance: Financial News
     */
    PSMContentCategoryPersonalFinanceFinancialNews = 13 * 1000 + 3, //IAB13-3
    /**
     * Personal Finance: Financial Planning
     */
    PSMContentCategoryPersonalFinanceFinancialPlanning = 13 * 1000 + 4, //IAB13-4
    /**
     * Personal Finance: Hedge Fund
     */
    PSMContentCategoryPersonalFinanceHedgeFund = 13 * 1000 + 5, //IAB13-5
    /**
     * Personal Finance: Insurance
     */
    PSMContentCategoryPersonalFinanceInsurance = 13 * 1000 + 6, //IAB13-6
    /**
     * Personal Finance: Investing
     */
    PSMContentCategoryPersonalFinanceInvesting = 13 * 1000 + 7, //IAB13-7
    /**
     * Personal Finance: Mutual Funds
     */
    PSMContentCategoryPersonalFinanceMutualFunds = 13 * 1000 + 8, //IAB13-8
    /**
     * Personal Finance: Options
     */
    PSMContentCategoryPersonalFinanceOptions = 13 * 1000 + 9, //IAB13-9
    /**
     * Personal Finance: Retirement Planning
     */
    PSMContentCategoryPersonalFinanceRetirementPlanning = 13 * 1000 + 10, //IAB13-10
    /**
     * Personal Finance: Stocks
     */
    PSMContentCategoryPersonalFinanceStocks = 13 * 1000 + 11, //IAB13-11
    /**
     * Personal Finance: Tax Planning
     */
    PSMContentCategoryPersonalFinanceTaxPlanning = 13 * 1000 + 12, //IAB13-12
    /**
     * Society
     */
    PSMContentCategorySociety = 14 * 1000, //IAB14
    /**
     * Society: Dating
     */
    PSMContentCategorySocietyDating = 14 * 1000 + 1, //IAB14-1
    /**
     * Society: Divorce Support
     */
    PSMContentCategorySocietyDivorceSupport = 14 * 1000 + 2, //IAB14-2
    /**
     * Society: Gay Life
     */
    PSMContentCategorySocietyGayLife = 14 * 1000 + 3, //IAB14-3
    /**
     * Society: Marriage
     */
    PSMContentCategorySocietyMarriage = 14 * 1000 + 4, //IAB14-4
    /**
     * Society: Senior Living
     */
    PSMContentCategorySocietySeniorLiving = 14 * 1000 + 5, //IAB14-5
    /**
     * Society: Teens
     */
    PSMContentCategorySocietyTeens = 14 * 1000 + 6, //IAB14-6
    /**
     * Society: Weddings
     */
    PSMContentCategorySocietyWeddings = 14 * 1000 + 7, //IAB14-7
    /**
     * Society: Ethnic Specific
     */
    PSMContentCategorySocietyEthnicSpecific = 14 * 1000 + 8, //IAB14-8
    /**
     * Science
     */
    PSMContentCategoryScience = 15 * 1000, //IAB15
    /**
     * Science: Astrology
     */
    PSMContentCategoryScienceAstrology = 15 * 1000 + 1, //IAB15-1
    /**
     * Science: Biology
     */
    PSMContentCategoryScienceBiology = 15 * 1000 + 2, //IAB15-2
    /**
     * Science: Chemistry
     */
    PSMContentCategoryScienceChemistry = 15 * 1000 + 3, //IAB15-3
    /**
     * Science: Geology
     */
    PSMContentCategoryScienceGeology = 15 * 1000 + 4, //IAB15-4
    /**
     * Science: Paranormal Phenomena
     */
    PSMContentCategoryScienceParanormalPhenomena = 15 * 1000 + 5, //IAB15-5
    /**
     * Science: Physics
     */
    PSMContentCategorySciencePhysics = 15 * 1000 + 6, //IAB15-6
    /**
     * Science: Space/Astronomy
     */
    PSMContentCategoryScienceSpaceAstronomy = 15 * 1000 + 7, //IAB15-7
    /**
     * Science: Geography
     */
    PSMContentCategoryScienceGeography = 15 * 1000 + 8, //IAB15-8
    /**
     * Science: Botany
     */
    PSMContentCategoryScienceBotany = 15 * 1000 + 9, //IAB15-9
    /**
     * Science: Weather
     */
    PSMContentCategoryScienceWeather = 15 * 1000 + 10, //IAB15-10
    /**
     * Pets
     */
    PSMContentCategoryPets = 16 * 1000, //IAB16
    /**
     * Pets: Aquariums
     */
    PSMContentCategoryPetsAquariums = 16 * 1000 + 1, //IAB16-1
    /**
     * Pets: Birds
     */
    PSMContentCategoryPetsBirds = 16 * 1000 + 2, //IAB16-2
    /**
     * Pets: Cats
     */
    PSMContentCategoryPetsCats = 16 * 1000 + 3, //IAB16-3
    /**
     * Pets: Dogs
     */
    PSMContentCategoryPetsDogs = 16 * 1000 + 4, //IAB16-4
    /**
     * Pets: Large Animals
     */
    PSMContentCategoryPetsLargeAnimals = 16 * 1000 + 5, //IAB16-5
    /**
     * Pets: Reptiles
     */
    PSMContentCategoryPetsReptiles = 16 * 1000 + 6, //IAB16-6
    /**
     * Pets: Veterinary Medicine
     */
    PSMContentCategoryPetsVeterinaryMedicine = 16 * 1000 + 7, //IAB16-7
    /**
     * Sports
     */
    PSMContentCategorySports = 17 * 1000, //IAB17
    /**
     * Sports: Auto Racing
     */
    PSMContentCategorySportsAutoRacing = 17 * 1000 + 1, //IAB17-1
    /**
     * Sports: Baseball
     */
    PSMContentCategorySportsBaseball = 17 * 1000 + 2, //IAB17-2
    /**
     * Sports: Bicycling
     */
    PSMContentCategorySportsBicycling = 17 * 1000 + 3, //IAB17-3
    /**
     * Sports: Bodybuilding
     */
    PSMContentCategorySportsBodybuilding = 17 * 1000 + 4, //IAB17-4
    /**
     * Sports: Boxing
     */
    PSMContentCategorySportsBoxing = 17 * 1000 + 5, //IAB17-5
    /**
     * Sports: Canoeing/Kayaking
     */
    PSMContentCategorySportsCanoeingKayaking = 17 * 1000 + 6, //IAB17-6
    /**
     * Sports: Cheerleading
     */
    PSMContentCategorySportsCheerleading = 17 * 1000 + 7, //IAB17-7
    /**
     * Sports: Climbing
     */
    PSMContentCategorySportsClimbing = 17 * 1000 + 8, //IAB17-8
    /**
     * Sports: Cricket
     */
    PSMContentCategorySportsCricket = 17 * 1000 + 9, //IAB17-9
    /**
     * Sports: Figure Skating
     */
    PSMContentCategorySportsFigureSkating = 17 * 1000 + 10, //IAB17-10
    /**
     * Sports: Fly Fishing
     */
    PSMContentCategorySportsFlyFishing = 17 * 1000 + 11, //IAB17-11
    /**
     * Sports: Football
     */
    PSMContentCategorySportsFootball = 17 * 1000 + 12, //IAB17-12
    /**
     * Sports: Freshwater Fishing
     */
    PSMContentCategorySportsFreshwaterFishing = 17 * 1000 + 13, //IAB17-13
    /**
     * Sports: Game & Fish
     */
    PSMContentCategorySportsGameFish = 17 * 1000 + 14, //IAB17-14
    /**
     * Sports: Golf
     */
    PSMContentCategorySportsGolf = 17 * 1000 + 15, //IAB17-15
    /**
     * Sports: Horse Racing
     */
    PSMContentCategorySportsHorseRacing = 17 * 1000 + 16, //IAB17-16
    /**
     * Sports: Horses
     */
    PSMContentCategorySportsHorses = 17 * 1000 + 17, //IAB17-17
    /**
     * Sports: Hunting/Shooting
     */
    PSMContentCategorySportsHuntingShooting = 17 * 1000 + 18, //IAB17-18
    /**
     * Sports: Inline Skating
     */
    PSMContentCategorySportsInlineSkating = 17 * 1000 + 19, //IAB17-19
    /**
     * Sports: Martial Arts
     */
    PSMContentCategorySportsMartialArts = 17 * 1000 + 20, //IAB17-20
    /**
     * Sports: Mountain Biking
     */
    PSMContentCategorySportsMountainBiking = 17 * 1000 + 21, //IAB17-21
    /**
     * Sports: NASCAR Racing
     */
    PSMContentCategorySportsNASCARRacing = 17 * 1000 + 22, //IAB17-22
    /**
     * Sports: Olympics
     */
    PSMContentCategorySportsOlympics = 17 * 1000 + 23, //IAB17-23
    /**
     * Sports: Paintball
     */
    PSMContentCategorySportsPaintball = 17 * 1000 + 24, //IAB17-24
    /**
     * Sports: Power & Motorcycles
     */
    PSMContentCategorySportsPowerMotorcycles = 17 * 1000 + 25, //IAB17-25
    /**
     * Sports: Pro Basketball
     */
    PSMContentCategorySportsProBasketball = 17 * 1000 + 26, //IAB17-26
    /**
     * Sports: Pro Ice Hockey
     */
    PSMContentCategorySportsProIceHockey = 17 * 1000 + 27, //IAB17-27
    /**
     * Sports: Rodeo
     */
    PSMContentCategorySportsRodeo = 17 * 1000 + 28, //IAB17-28
    /**
     * Sports: Rugby
     */
    PSMContentCategorySportsRugby = 17 * 1000 + 29, //IAB17-29
    /**
     * Sports: Running/Jogging
     */
    PSMContentCategorySportsRunningJogging = 17 * 1000 + 30, //IAB17-30
    /**
     * Sports: Sailing
     */
    PSMContentCategorySportsSailing = 17 * 1000 + 31, //IAB17-31
    /**
     * Sports: Saltwater Fishing
     */
    PSMContentCategorySportsSaltwaterFishing = 17 * 1000 + 32, //IAB17-32
    /**
     * Sports: Scuba Diving
     */
    PSMContentCategorySportsScubaDiving = 17 * 1000 + 33, //IAB17-33
    /**
     * Sports: Skateboarding
     */
    PSMContentCategorySportsSkateboarding = 17 * 1000 + 34, //IAB17-34
    /**
     * Sports: Skiing
     */
    PSMContentCategorySportsSkiing = 17 * 1000 + 35, //IAB17-35
    /**
     * Sports: Snowboarding
     */
    PSMContentCategorySportsSnowboarding = 17 * 1000 + 36, //IAB17-36
    /**
     * Sports: Surfing/Body-Boarding
     */
    PSMContentCategorySportsSurfingBodyBoarding = 17 * 1000 + 37, //IAB17-37
    /**
     * Sports: Swimming
     */
    PSMContentCategorySportsSwimming = 17 * 1000 + 38, //IAB17-38
    /**
     * Sports: Table Tennis/Ping-Pong
     */
    PSMContentCategorySportsTableTennisPingPong = 17 * 1000 + 39, //IAB17-39
    /**
     * Sports: Tennis
     */
    PSMContentCategorySportsTennis = 17 * 1000 + 40, //IAB17-40
    /**
     * Sports: Volleyball
     */
    PSMContentCategorySportsVolleyball = 17 * 1000 + 41, //IAB17-41
    /**
     * Sports: Walking
     */
    PSMContentCategorySportsWalking = 17 * 1000 + 42, //IAB17-42
    /**
     * Sports: Waterski/Wakeboard
     */
    PSMContentCategorySportsWaterskiWakeboard = 17 * 1000 + 43, //IAB17-43
    /**
     * Sports: World Soccer
     */
    PSMContentCategorySportsWorldSoccer = 17 * 1000 + 44, //IAB17-44
    /**
     * Fashion
     */
    PSMContentCategoryStyleFashion = 18 * 1000, //IAB18
    /**
     * Style & Fashion: Beauty
     */
    PSMContentCategoryStyleFashionBeauty = 18 * 1000 + 1, //IAB18-1
    /**
     * Style & Fashion: Body Art
     */
    PSMContentCategoryStyleFashionBodyArt = 18 * 1000 + 2, //IAB18-2
    /**
     * Style & Fashion: Fashion
     */
    PSMContentCategoryStyleFashionFashion = 18 * 1000 + 3, //IAB18-3
    /**
     * Style & Fashion: Jewelry
     */
    PSMContentCategoryStyleFashionJewelry = 18 * 1000 + 4, //IAB18-4
    /**
     * Style & Fashion: Clothing
     */
    PSMContentCategoryStyleFashionClothing = 18 * 1000 + 5, //IAB18-5
    /**
     * Style & Fashion: Accessories
     */
    PSMContentCategoryStyleFashionAccessories = 18 * 1000 + 6, //IAB18-6
    /**
     * Computing
     */
    PSMContentCategoryTechnologyComputing = 19 * 1000, //IAB19
    /**
     * Technology & Computing: 3-D Graphics
     */
    PSMContentCategoryTechnologyComputing3DGraphics = 19 * 1000 + 1, //IAB19-1
    /**
     * Technology & Computing: Animation
     */
    PSMContentCategoryTechnologyComputingAnimation = 19 * 1000 + 2, //IAB19-2
    /**
     * Technology & Computing: Antivirus Software
     */
    PSMContentCategoryTechnologyComputingAntivirusSoftware = 19 * 1000 + 3, //IAB19-3
    /**
     * Technology & Computing: C/C++
     */
    PSMContentCategoryTechnologyComputingCC = 19 * 1000 + 4, //IAB19-4
    /**
     * Technology & Computing: Cameras & Camcorders
     */
    PSMContentCategoryTechnologyComputingCamerasCamcorders = 19 * 1000 + 5, //IAB19-5
    /**
     * Technology & Computing: Cell Phones
     */
    PSMContentCategoryTechnologyComputingCellPhones = 19 * 1000 + 6, //IAB19-6
    /**
     * Technology & Computing: Computer Certification
     */
    PSMContentCategoryTechnologyComputingComputerCertification = 19 * 1000 + 7, //IAB19-7
    /**
     * Technology & Computing: Computer Networking
     */
    PSMContentCategoryTechnologyComputingComputerNetworking = 19 * 1000 + 8, //IAB19-8
    /**
     * Technology & Computing: Computer Peripherals
     */
    PSMContentCategoryTechnologyComputingComputerPeripherals = 19 * 1000 + 9, //IAB19-9
    /**
     * Technology & Computing: Computer Reviews
     */
    PSMContentCategoryTechnologyComputingComputerReviews = 19 * 1000 + 10, //IAB19-10
    /**
     * Technology & Computing: Data Centers
     */
    PSMContentCategoryTechnologyComputingDataCenters = 19 * 1000 + 11, //IAB19-11
    /**
     * Technology & Computing: Databases
     */
    PSMContentCategoryTechnologyComputingDatabases = 19 * 1000 + 12, //IAB19-12
    /**
     * Technology & Computing: Desktop Publishing
     */
    PSMContentCategoryTechnologyComputingDesktopPublishing = 19 * 1000 + 13, //IAB19-13
    /**
     * Technology & Computing: Desktop Video
     */
    PSMContentCategoryTechnologyComputingDesktopVideo = 19 * 1000 + 14, //IAB19-14
    /**
     * Technology & Computing: Email
     */
    PSMContentCategoryTechnologyComputingEmail = 19 * 1000 + 15, //IAB19-15
    /**
     * Technology & Computing: Graphics Software
     */
    PSMContentCategoryTechnologyComputingGraphicsSoftware = 19 * 1000 + 16, //IAB19-16
    /**
     * Technology & Computing: Home Video/DVD
     */
    PSMContentCategoryTechnologyComputingHomeVideoDVD = 19 * 1000 + 17, //IAB19-17
    /**
     * Technology & Computing: Internet Technology
     */
    PSMContentCategoryTechnologyComputingInternetTechnology = 19 * 1000 + 18, //IAB19-18
    /**
     * Technology & Computing: Java
     */
    PSMContentCategoryTechnologyComputingJava = 19 * 1000 + 19, //IAB19-19
    /**
     * Technology & Computing: JavaScript
     */
    PSMContentCategoryTechnologyComputingJavaScript = 19 * 1000 + 20, //IAB19-20
    /**
     * Technology & Computing: Mac Support
     */
    PSMContentCategoryTechnologyComputingMacSupport = 19 * 1000 + 21, //IAB19-21
    /**
     * Technology & Computing: MP3/MIDI
     */
    PSMContentCategoryTechnologyComputingMP3MIDI = 19 * 1000 + 22, //IAB19-22
    /**
     * Technology & Computing: Net Conferencing
     */
    PSMContentCategoryTechnologyComputingNetConferencing = 19 * 1000 + 23, //IAB19-23
    /**
     * Technology & Computing: Net for Beginners
     */
    PSMContentCategoryTechnologyComputingNetforBeginners = 19 * 1000 + 24, //IAB19-24
    /**
     * Technology & Computing: Network Security
     */
    PSMContentCategoryTechnologyComputingNetworkSecurity = 19 * 1000 + 25, //IAB19-25
    /**
     * Technology & Computing: Palmtops/PDAs
     */
    PSMContentCategoryTechnologyComputingPalmtopsPDAs = 19 * 1000 + 26, //IAB19-26
    /**
     * Technology & Computing: PC Support
     */
    PSMContentCategoryTechnologyComputingPCSupport = 19 * 1000 + 27, //IAB19-27
    /**
     * Technology & Computing: Portable
     */
    PSMContentCategoryTechnologyComputingPortable = 19 * 1000 + 28, //IAB19-28
    /**
     * Technology & Computing: Entertainment
     */
    PSMContentCategoryTechnologyComputingEntertainment = 19 * 1000 + 29, //IAB19-29
    /**
     * Technology & Computing: Shareware/Freeware
     */
    PSMContentCategoryTechnologyComputingSharewareFreeware = 19 * 1000 + 30, //IAB19-30
    /**
     * Technology & Computing: Unix
     */
    PSMContentCategoryTechnologyComputingUnix = 19 * 1000 + 31, //IAB19-31
    /**
     * Technology & Computing: Visual Basic
     */
    PSMContentCategoryTechnologyComputingVisualBasic = 19 * 1000 + 32, //IAB19-32
    /**
     * Technology & Computing: Web Clip Art
     */
    PSMContentCategoryTechnologyComputingWebClipArt = 19 * 1000 + 33, //IAB19-33
    /**
     * Technology & Computing: Web Design/HTML
     */
    PSMContentCategoryTechnologyComputingWebDesignHTML = 19 * 1000 + 34, //IAB19-34
    /**
     * Technology & Computing: Web Search
     */
    PSMContentCategoryTechnologyComputingWebSearch = 19 * 1000 + 35, //IAB19-35
    /**
     * Technology & Computing: Windows
     */
    PSMContentCategoryTechnologyComputingWindows = 19 * 1000 + 36, //IAB19-36
    /**
     * Travel
     */
    PSMContentCategoryTravel = 20 * 1000, //IAB20
    /**
     * Travel: Adventure Travel
     */
    PSMContentCategoryTravelAdventureTravel = 20 * 1000 + 1, //IAB20-1
    /**
     * Travel: Africa
     */
    PSMContentCategoryTravelAfrica = 20 * 1000 + 2, //IAB20-2
    /**
     * Travel: Air Travel
     */
    PSMContentCategoryTravelAirTravel = 20 * 1000 + 3, //IAB20-3
    /**
     * Travel: Australia & New Zealand
     */
    PSMContentCategoryTravelAustraliaNewZealand = 20 * 1000 + 4, //IAB20-4
    /**
     * Travel: Bed & Breakfasts
     */
    PSMContentCategoryTravelBedBreakfasts = 20 * 1000 + 5, //IAB20-5
    /**
     * Travel: Budget Travel
     */
    PSMContentCategoryTravelBudgetTravel = 20 * 1000 + 6, //IAB20-6
    /**
     * Travel: Business Travel
     */
    PSMContentCategoryTravelBusinessTravel = 20 * 1000 + 7, //IAB20-7
    /**
     * Travel: By US Locale
     */
    PSMContentCategoryTravelByUSLocale = 20 * 1000 + 8, //IAB20-8
    /**
     * Travel: Camping
     */
    PSMContentCategoryTravelCamping = 20 * 1000 + 9, //IAB20-9
    /**
     * Travel: Canada
     */
    PSMContentCategoryTravelCanada = 20 * 1000 + 10, //IAB20-10
    /**
     * Travel: Caribbean
     */
    PSMContentCategoryTravelCaribbean = 20 * 1000 + 11, //IAB20-11
    /**
     * Travel: Cruises
     */
    PSMContentCategoryTravelCruises = 20 * 1000 + 12, //IAB20-12
    /**
     * Travel: Eastern Europe
     */
    PSMContentCategoryTravelEasternEurope = 20 * 1000 + 13, //IAB20-13
    /**
     * Travel: Europe
     */
    PSMContentCategoryTravelEurope = 20 * 1000 + 14, //IAB20-14
    /**
     * Travel: France
     */
    PSMContentCategoryTravelFrance = 20 * 1000 + 15, //IAB20-15
    /**
     * Travel: Greece
     */
    PSMContentCategoryTravelGreece = 20 * 1000 + 16, //IAB20-16
    /**
     * Travel: Honeymoons/Getaways
     */
    PSMContentCategoryTravelHoneymoonsGetaways = 20 * 1000 + 17, //IAB20-17
    /**
     * Travel: Hotels
     */
    PSMContentCategoryTravelHotels = 20 * 1000 + 18, //IAB20-18
    /**
     * Travel: Italy
     */
    PSMContentCategoryTravelItaly = 20 * 1000 + 19, //IAB20-19
    /**
     * Travel: Japan
     */
    PSMContentCategoryTravelJapan = 20 * 1000 + 20, //IAB20-20
    /**
     * Travel: Mexico & Central America
     */
    PSMContentCategoryTravelMexicoCentralAmerica = 20 * 1000 + 21, //IAB20-21
    /**
     * Travel: National Parks
     */
    PSMContentCategoryTravelNationalParks = 20 * 1000 + 22, //IAB20-22
    /**
     * Travel: South America
     */
    PSMContentCategoryTravelSouthAmerica = 20 * 1000 + 23, //IAB20-23
    /**
     * Travel: Spas
     */
    PSMContentCategoryTravelSpas = 20 * 1000 + 24, //IAB20-24
    /**
     * Travel: Theme Parks
     */
    PSMContentCategoryTravelThemeParks = 20 * 1000 + 25, //IAB20-25
    /**
     * Travel: Traveling with Kids
     */
    PSMContentCategoryTravelTravelingwithKids = 20 * 1000 + 26, //IAB20-26
    /**
     * Travel: United Kingdom
     */
    PSMContentCategoryTravelUnitedKingdom = 20 * 1000 + 27, //IAB20-27
    /**
     * Estate
     */
    PSMContentCategoryRealEstate = 21 * 1000, //IAB21
    /**
     * Real Estate: Apartments
     */
    PSMContentCategoryRealEstateApartments = 21 * 1000 + 1, //IAB21-1
    /**
     * Real Estate: Architects
     */
    PSMContentCategoryRealEstateArchitects = 21 * 1000 + 2, //IAB21-2
    /**
     * Real Estate: Buying/Selling Homes
     */
    PSMContentCategoryRealEstateBuyingSellingHomes = 21 * 1000 + 3, //IAB21-3
    /**
     * Shopping
     */
    PSMContentCategoryShopping = 22 * 1000, //IAB22
    /**
     * Shopping: Contests & Freebies
     */
    PSMContentCategoryShoppingContestsFreebies = 22 * 1000 + 1, //IAB22-1
    /**
     * Shopping: Couponing
     */
    PSMContentCategoryShoppingCouponing = 22 * 1000 + 2, //IAB22-2
    /**
     * Shopping: Comparison
     */
    PSMContentCategoryShoppingComparison = 22 * 1000 + 3, //IAB22-3
    /**
     * Shopping: Engines
     */
    PSMContentCategoryShoppingEngines = 22 * 1000 + 4, //IAB22-4
    /**
     * Spirituality
     */
    PSMContentCategoryReligionSpirituality = 23 * 1000, //IAB23
    /**
     * Religion & Spirituality: Alternative Religions
     */
    PSMContentCategoryReligionSpiritualityAlternativeReligions = 23 * 1000 + 1, //IAB23-1
    /**
     * Religion & Spirituality: Atheism/Agnosticism
     */
    PSMContentCategoryReligionSpiritualityAtheismAgnosticism = 23 * 1000 + 2, //IAB23-2
    /**
     * Religion & Spirituality: Buddhism
     */
    PSMContentCategoryReligionSpiritualityBuddhism = 23 * 1000 + 3, //IAB23-3
    /**
     * Religion & Spirituality: Catholicism
     */
    PSMContentCategoryReligionSpiritualityCatholicism = 23 * 1000 + 4, //IAB23-4
    /**
     * Religion & Spirituality: Christianity
     */
    PSMContentCategoryReligionSpiritualityChristianity = 23 * 1000 + 5, //IAB23-5
    /**
     * Religion & Spirituality: Hinduism
     */
    PSMContentCategoryReligionSpiritualityHinduism = 23 * 1000 + 6, //IAB23-6
    /**
     * Religion & Spirituality: Islam
     */
    PSMContentCategoryReligionSpiritualityIslam = 23 * 1000 + 7, //IAB23-7
    /**
     * Religion & Spirituality: Judaism
     */
    PSMContentCategoryReligionSpiritualityJudaism = 23 * 1000 + 8, //IAB23-8
    /**
     * Religion & Spirituality: Latter-Day Saints
     */
    PSMContentCategoryReligionSpiritualityLatterDaySaints = 23 * 1000 + 9, //IAB23-9
    /**
     * Religion & Spirituality: Pagan/Wiccan
     */
    PSMContentCategoryReligionSpiritualityPaganWiccan = 23 * 1000 + 10, //IAB23-10
    /**
     * Uncategorized
     */
    PSMContentCategoryUncategorized = 24 * 1000, //IAB24
    /**
     * Uncategorized
     */
    PSMContentCategoryUncategorizedNonStandardContent = 25 * 1000, //IAB25
    /**
     * Uncategorized: Unmoderated UGC #Non-Standard Content
     */
    PSMContentCategoryUncategorizedUnmoderatedUGCNonStandardContent = 25 * 1000 + 1, //IAB25-1
    /**
     * Uncategorized: Extreme Graphic/Explicit Violence #Non-Standard Content
     */
    PSMContentCategoryUncategorizedExtremeGraphicExplicitViolenceNonStandardContent = 25 * 1000 + 2, //IAB25-2
    /**
     * Uncategorized: Pornography #Non-Standard Content
     */
    PSMContentCategoryUncategorizedPornographyNonStandardContent = 25 * 1000 + 3, //IAB25-3
    /**
     * Uncategorized: Profane Content #Non-Standard Content
     */
    PSMContentCategoryUncategorizedProfaneContentNonStandardContent = 25 * 1000 + 4, //IAB25-4
    /**
     * Uncategorized: Hate Content #Non-Standard Content
     */
    PSMContentCategoryUncategorizedHateContentNonStandardContent = 25 * 1000 + 5, //IAB25-5
    /**
     * Uncategorized: Under Construction #Non-Standard Content
     */
    PSMContentCategoryUncategorizedUnderConstructionNonStandardContent = 25 * 1000 + 6, //IAB25-6
    /**
     * Uncategorized: Incentivized #Non-Standard Content
     */
    PSMContentCategoryUncategorizedIncentivizedNonStandardContent = 25 * 1000 + 7, //IAB25-7
    /**
     * Content
     */
    PSMContentCategoryIllegalContent = 26 * 1000, //IAB26
    /**
     * Illegal Content: Illegal Content
     */
    PSMContentCategoryIllegalContentIllegalContent = 26 * 1000 + 1, //IAB26-1
    /**
     * Illegal Content: Warez
     */
    PSMContentCategoryIllegalContentWarez = 26 * 1000 + 2, //IAB26-2
    /**
     * Illegal Content: Spyware/Malware
     */
    PSMContentCategoryIllegalContentSpywareMalware = 26 * 1000 + 3, //IAB26-3
    /**
     * Illegal Content: Copyright Infringement
     */
    PSMContentCategoryIllegalContentCopyrightInfringement = 26 * 1000 + 4, //IAB26-4
};

NSString *contentCategoryToString(PSMContentCategory contentCategory);


#endif